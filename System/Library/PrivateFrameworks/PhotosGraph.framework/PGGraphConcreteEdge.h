/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphEdge.h>

@class NSMutableDictionary, NSString;

@interface PGGraphConcreteEdge : PGGraphEdge {

	NSMutableDictionary* _properties;
	unsigned short _domain;
	float _weight;
	NSString* _label;

}

@property (assign,nonatomic) float weight;              //@synthesize weight=_weight - In the implementation block
-(unsigned short)domain;
-(id)propertyForKey:(id)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(id)label;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(unsigned long long)propertiesCount;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)removeAllProperties;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(id)propertyKeys;
-(BOOL)hasProperties;
-(id)propertyDictionary;
-(void)setLocalProperties:(id)arg1 ;
-(void)mergeProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
@end

