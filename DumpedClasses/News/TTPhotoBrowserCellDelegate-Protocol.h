//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTPhotoBrowserCell, TTPhotoBrowserModel;

@protocol TTPhotoBrowserCellDelegate <NSObject>

@optional
- (void)tapPhotoBrowserCell:(TTPhotoBrowserCell *)arg1;
- (void)hideCompleteWithModel:(TTPhotoBrowserModel *)arg1;
- (void)showCompleteWithModel:(TTPhotoBrowserModel *)arg1;
@end
