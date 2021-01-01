/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewPrintFormatter.h>

@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter {

	SCD_Struct_UI30 _textViewPrintFormatterFlags;
	NSArray* _pageData;

}
-(id)text;
-(void)setText:(id)arg1 ;
-(id)font;
-(void)setFont:(id)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)_textView;
-(id)attributedText;
-(void)setAttributedText:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(id)_pageData;
@end

