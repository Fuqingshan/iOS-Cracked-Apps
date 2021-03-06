//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, TTAudioPlayer;

@protocol TTAudioPlayerDelegate <NSObject>

@optional
- (void)ttAudioPlayerEndInterruption:(TTAudioPlayer *)arg1 withOptions:(unsigned long long)arg2;
- (void)ttAudioPlayerBeginInterruption:(TTAudioPlayer *)arg1;
- (void)ttAudioDeviceProximityStateChange:(_Bool)arg1;
- (void)ttAudioPlayerFailedError:(NSError *)arg1;
- (void)ttAudioPlayerSuccessFinished;
@end

