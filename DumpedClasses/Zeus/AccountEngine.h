//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TUserInfo;

@interface AccountEngine : NSObject
{
    NSString *_mURL;
    TUserInfo *_mUserInfo;
}

+ (id)getInstance;
@property(retain, nonatomic) TUserInfo *mUserInfo; // @synthesize mUserInfo=_mUserInfo;
@property(retain, nonatomic) NSString *mURL; // @synthesize mURL=_mURL;
- (void).cxx_destruct;
- (id)getUserDataPath;
- (void)logout:(CDUnknownBlockType)arg1;
- (void)setUserHeadImg:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setUserInfo:(id)arg1 sex:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)queryUserInfoFromLocal;
- (void)queryUserInfo:(CDUnknownBlockType)arg1;
- (void)userRegist:(id)arg1 countryCode:(id)arg2 code:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestSMS:(id)arg1 countryCode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isLogin;
- (id)getUserToken;
- (void)saveUserToken:(id)arg1 token:(id)arg2 mobile:(id)arg3;
- (void)setHttpURL:(id)arg1;
- (id)init;

@end

