/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLRelationship.h>

@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship {

	NSString* _correlationTableName;
	NSString* _columnName;
	NSString* _orderColumnName;

}
-(void)dealloc;
-(id)inverseManyToMany;
-(id)columnName;
-(id)correlationTableName;
-(BOOL)isReflexive;
-(id)inverseColumnName;
-(id)inverseOrderColumnName;
-(id)orderColumnName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setColumnName:(id)arg1 ;
-(void)_setInverseManyToMany:(id)arg1 ;
-(BOOL)isMaster;
-(unsigned char)columnSQLType;
-(unsigned char)orderColumnSQLType;
-(void)_setCorrelationTableName:(id)arg1 ;
-(void)_setOrderColumnName:(id)arg1 ;
-(BOOL)isTableSchemaEqual:(id)arg1 ;
@end
