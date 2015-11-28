S(Z) * S(Z) + S(Z) * S(Z) -*-> S(S(Z)) by MR-Multi {
    S(Z) * S(Z) -*-> S(Z) by MR-One {
        S(Z) * S(Z) ---> S(Z) by R-Times {
            S(Z) times S(Z) is S(Z) by T-Succ {
                Z times S(Z) is Z by T-Zero {};
                S(Z) plus Z is S(Z) by P-Succ {
                    Z plus Z is Z by P-Zero {}
                }
            }
        }
    };
    S(Z) * S(Z) -*-> S(Z) by MR-One {
        S(Z) * S(Z) ---> S(Z) by R-Times {
            S(Z) times S(Z) is S(Z) by T-Succ {
                Z times S(Z) is Z by T-Zero {};
                S(Z) plus Z is S(Z) by P-Succ {
                    Z plus Z is Z by P-Zero {}
                }
            }
        }
    };
}
