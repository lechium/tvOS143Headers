/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol _UIImageViewLoadingDelegate;
@class UIImageView, UIImage, UIImageSymbolConfiguration, NSArray, CIContext, UILayoutGuide, NSMapTable, _UIImageLoader, UIView, NSString;

@interface _UIImageViewExtendedStorage : NSObject <CAAnimationDelegate> {

	UIImageView* _imageView;
	UIImage* _image;
	UIImage* _highlightedImage;
	UIImage* _configuredImage;
	UIImage* _configuredHighlightedImage;
	UIImageSymbolConfiguration* _preferredSymbolConfiguration;
	UIImageSymbolConfiguration* _overridingSymbolConfiguration;
	NSArray* _animationImages;
	NSArray* _highlightedAnimationImages;
	double _animationDuration;
	long long _animationRepeatCount;
	long long _defaultRenderingMode;
	unsigned long long _templateImageRenderingEffects;
	UIImage* _displayedImage;
	UIImage* _displayedHighlightedImage;
	CIContext* _CIContext;
	UILayoutGuide* _imageContentGuide;
	NSMapTable* _layouts;
	unsigned _drawMode;
	_UIImageLoader* _imageLoader;
	id<_UIImageViewLoadingDelegate> _loadingDelegate;
	UIImage* _imageBeingSetByLoader;
	UIView* _placeholderView;
	struct {
		unsigned highlighted : 1;
		unsigned masksTemplateImages : 1;
		unsigned adjustsImageSizeForAccessibilityContentSizeCategory : 1;
		unsigned startingLoad : 1;
		unsigned enqueueingLoad : 1;
		unsigned stoppingLoad : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initForImageView:(id)arg1 ;
@end

