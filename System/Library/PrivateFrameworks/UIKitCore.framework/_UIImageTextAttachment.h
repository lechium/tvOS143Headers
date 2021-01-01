/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class UIImage;

@interface _UIImageTextAttachment : NSTextAttachment {

	UIImage* _image;
	CGRect _bounds;
	SCD_Struct_UI30 _flags;

}
-(void)setBounds:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)_initWithImage:(id)arg1 ;
-(id)_imageAdaptedForTextAtIndex:(long long)arg1 inContainer:(id)arg2 sizeOnly:(BOOL)arg3 ;
-(id)_deriveAttribute:(id)arg1 inStorage:(id)arg2 atIndex:(long long)arg3 ;
@end

