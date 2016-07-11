/* Generated by RuntimeBrowser.
 */

@protocol ISBiometricTouchIDDelegate

@optional

- (void)operationShouldContinueTouchIDSession:(ISOperation *)arg1 value:(bool)arg2;
- (void)operationShouldInterruptAuthorizationDialogs:(ISOperation *)arg1 forFailureType:(long long)arg2;
- (void)operationWillSendTouchIDTokens:(ISOperation *)arg1 challenge:(NSString *)arg2 signature:(NSString *)arg3;

@end