/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class <EASPreflightUI>, <MCRootManager>, <MCTruthAuthority>, ASAccount, NSDictionary;

@interface MCEASPolicyPreflighter : NSObject {
    ASAccount *_account;
    <EASPreflightUI> *_master;
    NSDictionary *_requestedPolicy;
    <MCRootManager> *_root;
    <MCTruthAuthority> *_truth;
}

+ (void)accountNeedsPolicyUpdateForAccountID:(id)arg1;
+ (id)currentPreflighter;
+ (void)preflighter:(id)arg1 error:(id)arg2;
+ (void)preflighter:(id)arg1 needsComplianceWithPolicy:(id)arg2;
+ (void)preflighter:(id)arg1 successWithPolicy:(id)arg2 policyKey:(id)arg3;
+ (void)preflighterRemoteWipeRequestResponseAcknowledged:(id)arg1;
+ (void)preflighterRemoteWipeRequested:(id)arg1;
+ (void)preflighterSuccessWithoutPolicyUpdate:(id)arg1;
+ (void)setCurrentPreflighter:(id)arg1;

- (void)abortPreflight;
- (id)account;
- (id)globallyUnifiedPasscodePolicy;
- (id)initForAccount:(id)arg1 master:(id)arg2 truth:(id)arg3;
- (id)master;
- (void)preflightAccount;
- (id)requestedPolicy;
- (id)root;
- (void)setRequestedPolicy:(id)arg1;
- (void)setRoot:(id)arg1;
- (id)truth;
- (BOOL)tryPasswordFromPreflightStep:(id)arg1;

@end