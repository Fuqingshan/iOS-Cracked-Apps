//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KuQunPlayAPI : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)isPlayingVoiceMeeage;
- (void)playVoiceMessage;
- (void)pauseVoiceMessage;
- (unsigned long long)stopVoiceMessage;
- (void)stopVoiceMessageWhileQuitGroupChat;
- (void)playContributionSong:(id)arg1 isContinuePlayer:(_Bool)arg2;
- (void)playGroupNotice:(id)arg1;
- (void)playVoiceMsgFile:(id)arg1 andIsGroup:(_Bool)arg2;
- (void)playVoiceMsg:(id)arg1 andIsGroup:(_Bool)arg2;
- (void)startPlayKuQun:(int)arg1 andGroupName:(id)arg2 andGroupImg:(id)arg3 andCheckGroupStatus:(_Bool)arg4 andIsFailPause:(_Bool)arg5 andIsInKuqunChatVC:(_Bool)arg6;

@end

