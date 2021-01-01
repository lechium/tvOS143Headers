/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDictionary, CALayer;

@interface UITextMagnifierCommonRenderer : UIView {

	BOOL m_loaded;
	NSDictionary* m_images;
	NSDictionary* m_offsets;
	CALayer* m_back;
	CALayer* m_mask;
	CALayer* m_content;
	CALayer* m_front;
	BOOL _isRegisteredForGeometryChanges;

}
-(void)update;
-(void)didMoveToSuperview;
-(void)_geometryChanged:(const SCD_Struct_UI23*)arg1 forAncestor:(id)arg2 ;
-(void)loadImages;
-(id)visualsForMagnifier;
-(id)magnifier;
-(id)backgroundColourIfNecessary;
-(void)performOperations:(/*^block*/id)arg1 ;
@end

