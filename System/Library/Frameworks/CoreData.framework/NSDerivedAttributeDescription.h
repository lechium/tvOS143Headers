/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSAttributeDescription.h>

@class NSExpression, NSPredicate;

@interface NSDerivedAttributeDescription : NSAttributeDescription {

	NSExpression* _derivationExpression;
	NSPredicate* _filteringPredicate;

}

@property (retain) NSExpression * derivationExpression; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_propertyType;
-(BOOL)isTransient;
-(BOOL)isReadOnly;
-(NSExpression *)derivationExpression;
-(id)filteringPredicate;
-(BOOL)_isSchemaEqual:(id)arg1 ;
-(void)setDefaultValue:(id)arg1 ;
-(void)_createCachesAndOptimizeState;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(void)setRenamingIdentifier:(id)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(void)setTransient:(BOOL)arg1 ;
-(void)setDerivationExpression:(NSExpression *)arg1 ;
-(void)setFilteringPredicate:(id)arg1 ;
@end

