/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface VUIMediaEntityPropertyDescriptor : NSObject <NSCopying> {

	BOOL _allowsDefaultValue;
	BOOL _retrievesSourcePropertiesAtFetch;
	BOOL _sourceSupportsFiltering;
	NSString* _name;
	NSString* _sortAsName;
	unsigned long long _propertyType;
	NSString* _propertyValueClassName;
	id _defaultValue;
	NSSet* _sourcePropertyNames;
	/*^block*/id _sourceFilterValueBlock;
	/*^block*/id _sourceFilterBlock;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * sortAsName;                                //@synthesize sortAsName=_sortAsName - In the implementation block
@property (assign,nonatomic) unsigned long long propertyType;                    //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,copy) NSString * propertyValueClassName;                    //@synthesize propertyValueClassName=_propertyValueClassName - In the implementation block
@property (nonatomic,retain) id defaultValue;                                    //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,nonatomic) BOOL allowsDefaultValue;                            //@synthesize allowsDefaultValue=_allowsDefaultValue - In the implementation block
@property (nonatomic,copy) NSSet * sourcePropertyNames;                          //@synthesize sourcePropertyNames=_sourcePropertyNames - In the implementation block
@property (assign,nonatomic) BOOL retrievesSourcePropertiesAtFetch;              //@synthesize retrievesSourcePropertiesAtFetch=_retrievesSourcePropertiesAtFetch - In the implementation block
@property (assign,nonatomic) BOOL sourceSupportsFiltering;                       //@synthesize sourceSupportsFiltering=_sourceSupportsFiltering - In the implementation block
@property (nonatomic,copy) id sourceFilterValueBlock;                            //@synthesize sourceFilterValueBlock=_sourceFilterValueBlock - In the implementation block
@property (nonatomic,copy) id sourceFilterBlock;                                 //@synthesize sourceFilterBlock=_sourceFilterBlock - In the implementation block
+(id)_classNameFromPropertyType:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(id)defaultValue;
-(unsigned long long)propertyType;
-(void)setDefaultValue:(id)arg1 ;
-(void)setPropertyType:(unsigned long long)arg1 ;
-(void)setPropertyValueClassName:(NSString *)arg1 ;
-(NSString *)sortAsName;
-(void)setSortAsName:(NSString *)arg1 ;
-(void)setAllowsDefaultValue:(BOOL)arg1 ;
-(BOOL)allowsDefaultValue;
-(NSString *)propertyValueClassName;
-(void)setSourcePropertyNames:(NSSet *)arg1 ;
-(void)setRetrievesSourcePropertiesAtFetch:(BOOL)arg1 ;
-(void)_updateSourceSupportsFiltering;
-(NSSet *)sourcePropertyNames;
-(BOOL)retrievesSourcePropertiesAtFetch;
-(BOOL)sourceSupportsFiltering;
-(id)sourceFilterValueBlock;
-(id)sourceFilterBlock;
-(void)setSourceSupportsFiltering:(BOOL)arg1 ;
-(void)setSourceFilterValueBlock:(id)arg1 ;
-(void)setSourceFilterBlock:(id)arg1 ;
@end

