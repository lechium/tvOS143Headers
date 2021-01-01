/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIStoryboardSegueTemplate.h>

@class NSArray, UIView, UIBarButtonItem;

@interface UIStoryboardPopoverPresentationSegueTemplate : UIStoryboardSegueTemplate {

	unsigned long long _permittedArrowDirections;
	NSArray* _passthroughViews;
	UIView* _anchorView;
	UIBarButtonItem* _anchorBarButtonItem;

}

@property (assign,nonatomic) unsigned long long permittedArrowDirections;              //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews;                                 //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (nonatomic,retain) UIView * anchorView;                                      //@synthesize anchorView=_anchorView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * anchorBarButtonItem;                    //@synthesize anchorBarButtonItem=_anchorBarButtonItem - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(void)setPermittedArrowDirections:(unsigned long long)arg1 ;
-(UIView *)anchorView;
-(NSArray *)passthroughViews;
-(unsigned long long)permittedArrowDirections;
-(UIBarButtonItem *)anchorBarButtonItem;
-(/*^block*/id)newDefaultPrepareHandlerForSegue:(id)arg1 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(void)setAnchorView:(UIView *)arg1 ;
-(void)setAnchorBarButtonItem:(UIBarButtonItem *)arg1 ;
@end
