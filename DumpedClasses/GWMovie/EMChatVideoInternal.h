//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EMChatFileInternal.h"

@class NSString;

@interface EMChatVideoInternal : EMChatFileInternal
{
    _Bool _shouldGenerateThumbnail;
    long long _duration;
    NSString *_thumbnailPath;
    struct CGSize _size;
}

@property(nonatomic) _Bool shouldGenerateThumbnail; // @synthesize shouldGenerateThumbnail=_shouldGenerateThumbnail;
@property(copy, nonatomic) NSString *thumbnailPath; // @synthesize thumbnailPath=_thumbnailPath;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)description;
- (void)setLocalPath:(id)arg1;
- (id)initWithFile:(id)arg1 displayName:(id)arg2;
- (id)initWithData:(id)arg1 displayName:(id)arg2;
- (_Bool)updateVideo;

@end

