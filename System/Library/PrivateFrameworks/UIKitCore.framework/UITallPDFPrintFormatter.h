/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPrintFormatter.h>

@class NSURL;

@interface UITallPDFPrintFormatter : UIPrintFormatter {

	NSURL* _pdfPath;
	CGPDFDocumentRef _pdfDocRef;
	double _pdfScaleFactor;
	BOOL _rotate90;
	double _shiftUpLength;

}
-(long long)_recalcPageCount;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(id)initWithPDFURL:(id)arg1 ;
-(id)initWithPDFData:(id)arg1 ;
@end

