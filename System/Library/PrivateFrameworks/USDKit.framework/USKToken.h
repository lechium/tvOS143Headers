/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <USDKit/USDKit-Structs.h>
@interface USKToken : NSObject {

	TfToken* _token;

}
+(id)dataTypeWithTfToken:(TfToken*)arg1 ;
+(id)nodeTypeWithTfToken:(TfToken*)arg1 ;
+(id)schemaTypeWithTfToken:(TfToken*)arg1 ;
+(id)roleTypeWithTfToken:(TfToken*)arg1 ;
+(id)tokenWithNodeType:(id)arg1 ;
+(id)tokenWithRoleType:(id)arg1 ;
+(id)tokenWithDataType:(id)arg1 ;
+(id)tokenWithSchemaType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)stringValue;
-(id)initWithString:(id)arg1 ;
-(TfToken*)token;
-(id)initWithTfToken:(TfToken*)arg1 ;
@end

