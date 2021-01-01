/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface UIFontDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _attributes;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;
	id _reserved5;

}

@property (nonatomic,readonly) NSString * postscriptName; 
@property (nonatomic,readonly) double pointSize; 
@property (nonatomic,readonly) CGAffineTransform matrix; 
@property (nonatomic,readonly) unsigned symbolicTraits; 
@property (nonatomic,readonly) NSDictionary * fontAttributes; 
+(BOOL)supportsSecureCoding;
+(id)_createMungledDictionary:(id)arg1 ;
+(id)fontDescriptorWithFontAttributes:(id)arg1 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned)arg2 options:(unsigned long long)arg3 ;
+(id)defaultFontDescriptorWithTextStyle:(id)arg1 ;
+(id)defaultFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned)arg2 options:(unsigned long long)arg3 ;
+(id)fontDescriptorWithName:(id)arg1 size:(double)arg2 ;
+(id)fontDescriptorWithName:(id)arg1 matrix:(CGAffineTransform)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(Class)classForCoder;
-(id)objectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)fontDescriptorWithSymbolicTraits:(unsigned)arg1 ;
-(id)_attributes;
-(double)pointSize;
-(id)_swapWithFontAttributes:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithFontAttributes:(id)arg1 ;
-(id)fontDescriptorWithSymbolicTraits:(unsigned)arg1 mask:(unsigned)arg2 ;
-(NSDictionary *)fontAttributes;
-(id)fontDescriptorByAddingAttributes:(id)arg1 ;
-(id)_fontDescriptorWithMatrix:(CGAffineTransform)arg1 ;
-(CGAffineTransform)_matrix;
-(NSString *)postscriptName;
-(unsigned)symbolicTraits;
-(id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1 ;
-(id)matchingFontDescriptorWithMandatoryKeys:(id)arg1 ;
-(id)_NSAffineTransform;
-(id)fontDescriptorWithMatrix:(CGAffineTransform)arg1 ;
-(CGAffineTransform)matrix;
-(id)fontDescriptorWithSize:(double)arg1 ;
-(id)fontDescriptorWithFace:(id)arg1 ;
-(id)fontDescriptorWithFamily:(id)arg1 ;
-(id)fontDescriptorWithDesign:(id)arg1 ;
-(id)_visibleName;
@end

