//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KTVChorusKrcShowTableDelegate.h"

@class KTVChorusKrcView, NSString, UIImageView;

@interface ChorusKrcDragPlane : NSObject <KTVChorusKrcShowTableDelegate>
{
    _Bool _shouldIndicePreTime;
    UIImageView *_indicateLine;
    CDUnknownBlockType _dragEventBlock;
    KTVChorusKrcView *_oprationPlane;
}

@property(retain, nonatomic) KTVChorusKrcView *oprationPlane; // @synthesize oprationPlane=_oprationPlane;
@property(nonatomic) _Bool shouldIndicePreTime; // @synthesize shouldIndicePreTime=_shouldIndicePreTime;
@property(copy, nonatomic) CDUnknownBlockType dragEventBlock; // @synthesize dragEventBlock=_dragEventBlock;
@property(retain, nonatomic) UIImageView *indicateLine; // @synthesize indicateLine=_indicateLine;
- (void).cxx_destruct;
- (void)choruskrcTableViewDidEndDrag:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)choruskrcTableViewDidStartDrag:(id)arg1;
- (void)updateTheSelectedEara;
- (void)configureForOprationPlane:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

