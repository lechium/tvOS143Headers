/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _AFDataStoreEntry : NSObject {

	long long _type;
	id _value;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id value;                    //@synthesize value=_value - In the implementation block
-(long long)type;
-(id)value;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(id)_propertyListStringForType;
-(id)propertyListRepresentation;
-(long long)_typeForPropertyListString:(id)arg1 ;
-(id)initWithPropertyListRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)_valuePropertyListRepresentation;
-(id)_valueForPropertyListRepresentation:(id)arg1 type:(long long)arg2 ;
@end
