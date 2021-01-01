/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/_UIWebHighlightLongPressGestureRecognizer.h>

@class UIScrollView;

@interface WKHighlightLongPressGestureRecognizer : _UIWebHighlightLongPressGestureRecognizer {

	WeakObjCPtr<UIScrollView> _lastTouchedScrollView;

}

@property (nonatomic,__weak,readonly) UIScrollView * lastTouchedScrollView; 
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(UIScrollView *)lastTouchedScrollView;
@end

