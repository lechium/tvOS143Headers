/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextInputCore/TextInputCore-Structs.h>
@class NSArray, NSString;

@interface TISCTextRunRequest : NSObject {

	NSArray* _strings;
	CGColorRef _color;
	double _maxFontSize;
	double _minFontSize;
	BOOL _allowTruncation;
	NSString* _truncationSentinel;
	unsigned long long _widthGroup;

}
+(id)textRunRequestWithStrings:(id)arg1 color:(CGColorRef)arg2 maxFontSize:(double)arg3 minFontSize:(double)arg4 allowTruncation:(BOOL)arg5 truncationSentinel:(id)arg6 widthGroup:(unsigned long long)arg7 ;
-(void)dealloc;
-(CGColorRef)color;
-(double)maxFontSize;
-(double)minFontSize;
-(id)truncationSentinel;
-(id)strings;
-(BOOL)allowTruncation;
-(unsigned long long)widthGroup;
@end
