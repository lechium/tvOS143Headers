/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHObjectDeleteRequest.h>

@interface PHTrashableObjectDeleteRequest : PHObjectDeleteRequest {

	BOOL _clientEntitledToExpunge;
	long long _operation;

}

@property (nonatomic,readonly) long long operation;                                                        //@synthesize operation=_operation - In the implementation block
@property (getter=isClientEntitledToExpunge,nonatomic,readonly) BOOL clientEntitledToExpunge;              //@synthesize clientEntitledToExpunge=_clientEntitledToExpunge - In the implementation block
+(id)deleteRequestForObject:(id)arg1 ;
+(id)deleteRequestForObject:(id)arg1 operation:(long long)arg2 ;
-(long long)operation;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 operation:(long long)arg3 ;
-(BOOL)isClientEntitledToExpunge;
@end

