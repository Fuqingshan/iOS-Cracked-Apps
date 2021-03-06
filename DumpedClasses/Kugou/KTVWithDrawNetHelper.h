//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVBaseNetHelper.h"

@interface KTVWithDrawNetHelper : KTVBaseNetHelper
{
}

- (void)AsyncGetWithdrawBankCardListWithPlayerId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)AsyncPostUnBindingBankCardWithPlayerId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)AsyncPostBindBankCardWithPlayerId:(long long)arg1 bankCard:(id)arg2 bankName:(id)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)AsyncGetCityOpusListWithPlayerId:(long long)arg1 cityCode:(int)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)AsyncPostWithdrawNowWithPlayerId:(long long)arg1 num:(long long)arg2 password:(id)arg3 payType:(int)arg4 succeed:(CDUnknownBlockType)arg5 failed:(CDUnknownBlockType)arg6;
- (void)AsyncPostWithdrawDetailPageWithPlayerId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)AsyncGetFansContributionListWithPlayerId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)AsyncPostChangeKCoinNowWithPlayerId:(long long)arg1 num:(long long)arg2 password:(id)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)AsyncPostKcoinDetailWithPlayerId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)AsyncPostSafeStepWithPlayerId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)AsyncPostValidMobileOKWithPlayerId:(long long)arg1 mobileNum:(id)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)AsyncPostRetrievePasswordWithPlayerId:(long long)arg1 idNo:(id)arg2 idName:(id)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)AsyncPostZMXYGenerateSignWithPlayerId:(long long)arg1 idNo:(id)arg2 idName:(id)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)AsyncPostValidWithdrawWithPlayerId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)AsyncPostUserWithdrawListWithPlayerId:(long long)arg1 page:(int)arg2 pageSize:(int)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)AsyncPostUserExchangeListWithPlayerId:(long long)arg1 page:(int)arg2 pageSize:(int)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)AsyncPostValidMobileWithPlayerId:(long long)arg1 validNum:(id)arg2 type:(int)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)AsyncPostSaveMobilePhoneWithPlayerId:(long long)arg1 phoneNum:(long long)arg2 validNum:(id)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)AsyncPostMessageSaveByMoblieWithPlayerId:(long long)arg1 mobileNum:(id)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)AsyncPostMessageChangeByMoblieWithPlayerId:(long long)arg1 type:(int)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)AsyncPostChangeToKcoinWithPlayerId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)AsyncPostUnBoundAliWithPlayerId:(long long)arg1 validNum:(id)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)AsyncPostBoundAliWithPlayerId:(long long)arg1 aliNum:(id)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)AsyncPostGetKBeanIncomeList:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)AsyncPostCheckOldpassword:(id)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)AsyncPostSavePwdPlayerId:(long long)arg1 password:(id)arg2 type:(int)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)AsyncPostBeanInfoPlayerId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;

@end

