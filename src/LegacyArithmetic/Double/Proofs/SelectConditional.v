Require Import Coq.ZArith.ZArith.
Require Import Crypto.LegacyArithmetic.Interface.
Require Import Crypto.LegacyArithmetic.Double.Core.
Require Import Crypto.LegacyArithmetic.Double.Proofs.Decode.

Section select_conditional.
  Context {n W}
          {decode : decoder n W}
          {is_decode : is_decode decode}
          {selc : select_conditional W}
          {is_selc : is_select_conditional selc}.

  Global Instance is_select_conditional_double
    : is_select_conditional selc_double.
  Proof using Type*.
    intros b x y.
    destruct n.
    { rewrite !(tuple_decoder_n_O (W:=W) 2); now destruct b. }
    { rewrite (tuple_decoder_2 x), (tuple_decoder_2 y), (tuple_decoder_2 (selc_double b x y))
        by apply Zle_0_pos.
      push_decode.
      now destruct b. }
    { rewrite !(tuple_decoder_n_neg (W:=W) 2); now destruct b. }
  Qed.
End select_conditional.
