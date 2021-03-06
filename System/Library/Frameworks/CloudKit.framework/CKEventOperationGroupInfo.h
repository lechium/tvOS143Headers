/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKEventOperationGroupInfo : NSObject <NSSecureCoding> {

	NSString* _operationGroupID;
	NSString* _operationGroupName;

}

@property (nonatomic,readonly) NSString * operationGroupID;                //@synthesize operationGroupID=_operationGroupID - In the implementation block
@property (nonatomic,readonly) NSString * operationGroupName;              //@synthesize operationGroupName=_operationGroupName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)operationGroupID;
-(id)initWithOperationGroup:(id)arg1 ;
-(NSString *)operationGroupName;
@end

