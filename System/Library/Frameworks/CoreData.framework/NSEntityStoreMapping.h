/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSStoreMapping.h>

@class NSEntityDescription, NSDictionary, NSArray, NSString;

@interface NSEntityStoreMapping : NSStoreMapping {

	NSEntityDescription* _entity;
	NSDictionary* _propertyMappings;
	NSArray* _primaryKeys;
	BOOL _isSingleTableEntity;
	NSString* _subentityColumn;
	unsigned _subentityID;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(id)entity;
-(void)setEntity:(id)arg1 ;
-(void)setPropertyMappings:(id)arg1 ;
-(void)setPrimaryKeys:(id)arg1 ;
-(void)setSingleTableEntity:(BOOL)arg1 ;
-(void)setSubentityColumn:(id)arg1 ;
-(void)setSubentityID:(unsigned)arg1 ;
-(id)propertyMappings;
-(id)primaryKeys;
-(BOOL)isSingleTableEntity;
-(id)subentityColumn;
-(unsigned)subentityID;
-(id)initWithEntity:(id)arg1 ;
-(id)createTableStatement;
@end

