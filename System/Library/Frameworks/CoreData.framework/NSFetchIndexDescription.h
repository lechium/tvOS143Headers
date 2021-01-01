/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSEntityDescription, NSPredicate;

@interface NSFetchIndexDescription : NSObject <NSSecureCoding, NSCoding, NSCopying> {

	NSString* _name;
	NSArray* _elements;
	NSEntityDescription* _entity;
	NSPredicate* _partialIndexPredicate;

}

@property (copy) NSString * name; 
@property (copy) NSArray * elements; 
@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (copy) NSPredicate * partialIndexPredicate; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)elements;
-(NSEntityDescription *)entity;
-(void)_throwIfNotEditable;
-(id)initWithName:(id)arg1 elements:(id)arg2 ;
-(BOOL)_isEditable;
-(id)initWithName:(id)arg1 predicate:(id)arg2 elements:(id)arg3 entity:(id)arg4 ;
-(NSPredicate *)partialIndexPredicate;
-(void)setElements:(NSArray *)arg1 ;
-(void)setPartialIndexPredicate:(NSPredicate *)arg1 ;
@end

