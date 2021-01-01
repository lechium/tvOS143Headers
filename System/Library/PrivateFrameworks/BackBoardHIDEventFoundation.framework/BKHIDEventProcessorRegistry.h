/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BKHIDEventProcessorRegistering.h>

@class NSMutableDictionary, NSString;

@interface BKHIDEventProcessorRegistry : NSObject <BKHIDEventProcessorRegistering> {

	NSMutableDictionary* _eventProcessorsByClassName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)addEventProcessor:(id)arg1 ;
-(id)eventProcessorOfClass:(Class)arg1 ;
@end

