//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PPVoteContext : NSObject
{
}

+ (_Bool)isMaxOption:(id)arg1;
+ (long long)optionCount:(id)arg1;
+ (long long)voteCount:(id)arg1;
+ (_Bool)isVoted:(id)arg1;
+ (_Bool)isOptionVoted:(id)arg1;
+ (_Bool)containsVoteOption:(id)arg1;
+ (void)mergeOption:(id)arg1;
+ (void)addVoteOption:(id)arg1;
+ (void)unuse;
+ (void)use;

@end

