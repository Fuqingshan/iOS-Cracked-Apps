//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFeedToolbox, FBPersonTimelineTapResponder, FBProfilePictureComponentStatusListenerAnnouncer, FBUserSession, NSObject, NSString;

@protocol FBProfilePictureComponentToolbox <NSObject>
@property(readonly, nonatomic) FBProfilePictureComponentStatusListenerAnnouncer *profilePictureComponentStatusListenerAnnouncer;
@property(readonly, copy, nonatomic) NSString *analyticsModule;
@property(readonly, nonatomic) FBFeedToolbox *feedToolbox;
@property(readonly, nonatomic) FBPersonTimelineTapResponder *profileTapResponder;
@property(readonly, nonatomic) NSObject *scenePath;
@property(readonly, nonatomic) FBUserSession *session;
@end

