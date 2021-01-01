/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextItemDiscoverable.h>

@protocol _UITextContent;
@class UIView, NSString;

@interface _UITextItemDiscoverer : NSObject <_UITextItemDiscoverable> {

	UIView*<_UITextContent> _view;

}

@property (nonatomic,__weak,readonly) UIView*<_UITextContent> view;                        //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) id<UICoordinateSpace> textItemCoordinateSpace; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView*<_UITextContent>)view;
-(id)initWithView:(id)arg1 ;
-(CGRect)_visibleBounds;
-(NSRange)_nsrangeForTextRange:(id)arg1 ;
-(id)_anyTextItemConstrainedToLineAtPoint:(CGPoint)arg1 ;
-(id<UICoordinateSpace>)textItemCoordinateSpace;
-(id)visibleTextRange;
-(id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2 ;
-(BOOL)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2 ;
-(id)_textReferenceView;
@end

