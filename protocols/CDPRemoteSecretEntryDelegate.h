/* Generated by RuntimeBrowser.
 */

@protocol CDPRemoteSecretEntryDelegate

@required

- (void)cancelledRemoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1;
- (void)exceededMaximumAttemptsForRemoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1;
- (void)remoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1 depletedRemainingAttemptsForDevice:(CDPDevice *)arg2;
- (void)remoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1 didAcceptValidRemoteSecretForDevice:(CDPDevice *)arg2;

@end
