/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSDate;

@interface _CDContextualChangeRegistrationMO : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSData * properties; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,nonatomic) BOOL isMultiDeviceRegistration; 
@property (assign,nonatomic) BOOL isActive; 
+(void)hydrateMO:(id)arg1 fromRegistration:(id)arg2 ;
+(id)predicateForActiveRegistrationsInBootSession:(id)arg1 ;
+(id)materializedRegistrationFrom:(id)arg1 ;
@end
