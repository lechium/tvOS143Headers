/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PGFeature : NSObject {

	id _typeSpecificIdentifier;
	unsigned long long _type;
	NSString* _name;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isNoneFeature; 
+(id)stringForFeatureType:(unsigned long long)arg1 ;
+(id)featureWithType:(unsigned long long)arg1 node:(id)arg2 ;
+(id)featureWithMeaningfulEvent:(id)arg1 ;
+(id)featureWithType:(unsigned long long)arg1 name:(id)arg2 ;
+(id)noneFeatureWithType:(unsigned long long)arg1 ;
+(id)nameForNode:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(id)encodedFeature;
-(id)initWithEncodedFeature:(id)arg1 graph:(id)arg2 ;
-(BOOL)isNoneFeature;
-(id)nodeInGraph:(id)arg1 ;
@end

