/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMapTable;

@interface _UIFocusGroupHistory : NSObject {

	NSMapTable* _groupToItemMap;

}
-(id)init;
-(id)lastFocusedItemForGroup:(id)arg1 ;
-(void)setLastFocusedItem:(id)arg1 forGroup:(id)arg2 ;
-(void)_uiktest_clearHistory;
@end

