/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSException.h>

@interface CKException : NSException

@property (nonatomic,readonly) int errorCode; 
-(id)error;
-(int)errorCode;
-(id)initWithName:(id)arg1 format:(id)arg2 ;
-(id)initWithCode:(int)arg1 format:(id)arg2 ;
-(id)initWithCode:(int)arg1 format:(id)arg2 args:(char*)arg3 ;
-(id)initWithName:(id)arg1 format:(id)arg2 args:(char*)arg3 ;
@end

