/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol EKFrozenMeltedPair <NSObject>
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * semanticIdentifier; 
@required
+(Class)frozenClass;
+(Class)meltedClass;
-(id)initWithObject:(id)arg1;
-(void)setValue:(id)arg1 forKey:(id)arg2;
-(NSString *)uniqueIdentifier;
-(id)valueForKey:(id)arg1;
-(BOOL)isFrozen;
-(id)changeSet;
-(BOOL)isPartialObject;
-(Class)frozenClass;
-(BOOL)isPropertyUnavailable:(id)arg1;
-(BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2;
-(id)frozenObject;
-(id)meltedObjectInStore:(id)arg1;
-(id)existingMeltedObject;
-(BOOL)isCompletelyEqual:(id)arg1;
-(NSString *)semanticIdentifier;

@end

