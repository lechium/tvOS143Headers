/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UITableViewCell, NSIndexPath, NSTimer, UIShadowView;

@interface _UITableViewReorderingSupport : NSObject {

	UITableViewCell* _reorderedCell;
	NSIndexPath* _initialIndexPath;
	NSIndexPath* _targetIndexPath;
	unsigned _oldShowHorizontalScrollIndicator : 1;
	unsigned _oldShowVerticalScrollIndicator : 1;
	unsigned _reloadDataCalled : 1;
	unsigned _reorderingCancelled : 1;
	unsigned _reserved : 28;
	NSTimer* _autoscrollTimer;
	UIShadowView* _topShadowView;
	UIShadowView* _bottomShadowView;
	BOOL _wasScrollingEnabled;

}
@end

