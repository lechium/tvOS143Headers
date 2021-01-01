/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSDictionary, NSString;

@interface __NSVariableWidthString : NSString {

	NSDictionary* _variants;
	NSString* _defaultString;

}

@property (readonly) unsigned long long length; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)formatConfiguration;
-(id)initWithWidthContexts:(id)arg1 ;
-(id)initWithString:(id)arg1 widthVariants:(id)arg2 ;
-(id)initWithWidthVariants:(id)arg1 ;
-(id)variantFittingPresentationWidth:(long long)arg1 ;
-(id)_widthVariants;
@end

