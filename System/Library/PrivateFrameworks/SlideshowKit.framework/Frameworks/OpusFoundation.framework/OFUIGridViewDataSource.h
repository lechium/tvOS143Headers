/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OFUIGridViewDataSource <NSObject>
@optional
-(void)gridView:(id)arg1 willDisplayCell:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)gridView:(id)arg1 didRecycleCell:(id)arg2 atIndex:(unsigned long long)arg3;

@required
-(long long)numberOfCellsInGridView:(id)arg1;
-(id)gridView:(id)arg1 cellAtIndex:(unsigned long long)arg2;

@end
