/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, NSArray;

@interface MKMultiPartAttributedString : NSObject <NSCopying> {

	NSAttributedString* _attributedString;
	NSArray* _components;
	NSArray* _separators;

}

@property (nonatomic,copy,readonly) NSArray * components;                          //@synthesize components=_components - In the implementation block
@property (nonatomic,copy,readonly) NSArray * separators;                          //@synthesize separators=_separators - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
+(id)multiPartAttributedStringWithComponents:(id)arg1 repeatedSeparator:(id)arg2 ;
+(id)multiPartAttributedStringWithString:(id)arg1 ;
+(id)_mapkit_multiPartAttributedStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(NSArray *)components;
-(NSArray *)separators;
-(NSAttributedString *)attributedString;
-(id)initWithComponents:(id)arg1 separators:(id)arg2 ;
@end

