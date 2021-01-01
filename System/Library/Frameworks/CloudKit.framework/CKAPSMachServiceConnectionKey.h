/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying> {

	NSString* _environmentName;
	NSString* _namedDelegatePort;

}

@property (nonatomic,copy,readonly) NSString * environmentName;                //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,copy,readonly) NSString * namedDelegatePort;              //@synthesize namedDelegatePort=_namedDelegatePort - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 ;
-(NSString *)environmentName;
-(NSString *)namedDelegatePort;
@end
