/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSIndexPath;

@interface _UITableViewCellReuseParameters : NSObject {

	BOOL _didEndDisplaying;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) BOOL didEndDisplaying;                //@synthesize didEndDisplaying=_didEndDisplaying - In the implementation block
-(NSIndexPath *)indexPath;
-(id)initWithIndexPath:(id)arg1 didEndDisplaying:(BOOL)arg2 ;
-(BOOL)didEndDisplaying;
@end

