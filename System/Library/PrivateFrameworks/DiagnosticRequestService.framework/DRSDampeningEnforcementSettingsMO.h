/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class DRSDampeningManagerMO;

@interface DRSDampeningEnforcementSettingsMO : NSManagedObject

@property (assign,nonatomic) BOOL enforcesResourceCap; 
@property (assign,nonatomic) BOOL enforcesResourceDownsampling; 
@property (assign,nonatomic) BOOL enforcesResourceHysteresis; 
@property (assign,nonatomic) BOOL enforcesSignatureCap; 
@property (assign,nonatomic) BOOL enforcesSignatureDownsampling; 
@property (assign,nonatomic) BOOL enforcesSignatureHysteresis; 
@property (assign,nonatomic) BOOL enforcesTotalCap; 
@property (nonatomic,retain) DRSDampeningManagerMO * parentDampeningManager; 
+(id)fetchRequest;
@end

