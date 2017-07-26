//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QRChapterDownloaderDelegate.h"

@class NSString, OnlineTag, QRSerializedBookInfo;

@interface QRChapterInfoUpdater : NSObject <QRChapterDownloaderDelegate>
{
    OnlineTag *_onlineTag;
    _Bool _isUpdateChapterInfo;
    _Bool _isUpdating;
    QRSerializedBookInfo *_serializedBookInfo;
    void *_cfSelfRef;
    id <QRChapterInfoUpdaterDelegate> _delegate;
}

+ (void)downloadBookInfoWithBookId:(id)arg1;
+ (void)doDownloadBookInfoWithBookId:(id)arg1 forceUpdate:(_Bool)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
@property(nonatomic) __weak id <QRChapterInfoUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)chapterDownloadFailed:(id)arg1 request:(id)arg2 message:(id)arg3;
- (void)chapterDownloadFinished:(id)arg1 request:(id)arg2 response:(id)arg3;
- (void)doUpdateWithChapters:(_Bool)arg1 andForceUpdate:(_Bool)arg2;
- (void)updateChapterInfo:(_Bool)arg1;
- (void)updateBookInfo:(_Bool)arg1;
- (void)updateChapterInfo;
- (void)updateBookInfo;
- (id)initWithOnlineTag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
