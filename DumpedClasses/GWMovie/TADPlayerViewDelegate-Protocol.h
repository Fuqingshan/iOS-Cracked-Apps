//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, TADPlayerView;

@protocol TADPlayerViewDelegate <NSObject>
- (void)videoPlayError:(TADPlayerView *)arg1 error:(NSError *)arg2;
- (void)videoPlayFinished:(TADPlayerView *)arg1;
- (void)videoReadyToPlay:(TADPlayerView *)arg1;

@optional
- (void)videoPieceFinished:(TADPlayerView *)arg1 index:(long long)arg2;
- (void)videoPieceReady:(TADPlayerView *)arg1 index:(long long)arg2;
- (void)videoPlayProgressChanged:(TADPlayerView *)arg1 current:(double)arg2;
- (void)videoBufferProgressChanged:(TADPlayerView *)arg1 current:(double)arg2;
@end

