/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, KTSignedMutationTimestamp;

@interface KTSMTFailure : NSManagedObject

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * errorDomain; 
@property (nonatomic,retain) NSData * proofOfFailure; 
@property (nonatomic,retain) KTSignedMutationTimestamp * smt; 
+(id)fetchRequest;
@end

