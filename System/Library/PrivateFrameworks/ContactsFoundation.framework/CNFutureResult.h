/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSError;

@interface CNFutureResult : NSObject {

	id _result;
	NSError* _error;

}

@property (nonatomic,retain) id result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)result;
-(void)setResult:(id)arg1 ;
-(void)setResult:(id)arg1 error:(id)arg2 ;
@end
