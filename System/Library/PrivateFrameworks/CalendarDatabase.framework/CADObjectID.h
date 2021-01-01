/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDatabase/CalendarDatabase-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CADObjectID : NSObject <NSCopying, NSSecureCoding> {

	BOOL _temporary;
	int _entityType;
	int _entityID;

}

@property (nonatomic,readonly) int entityType;                                 //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) int entityID;                                   //@synthesize entityID=_entityID - In the implementation block
@property (getter=isTemporary,nonatomic,readonly) BOOL temporary;              //@synthesize temporary=_temporary - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)stringRepresentation;
-(id)entityName;
-(id)URIRepresentation;
-(int)entityID;
-(BOOL)isTemporary;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(int)entityType;
-(id)initWithEntityType:(int)arg1 entityID:(int)arg2 ;
@end

