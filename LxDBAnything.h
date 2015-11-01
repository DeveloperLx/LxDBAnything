//
//  LxDBAnything.h
//  LxDBAnythingDemo
//
//  Created by DeveloperLx on 15/10/24.
//  Copyright © 2015年 DeveloperLx. All rights reserved.
//

#ifndef LxDBAnything_h
#define LxDBAnything_h

#import <UIKit/UIKit.h>

#if TARGET_OS_IPHONE

    #define LxEdgeInsets    UIEdgeInsets
    #define LxOffset        UIOffset
    #define valueWithLxOffset   valueWithUIOffset
    #define valueWithLxEdgeInsets   valueWithUIEdgeInsets

#elif TARGET_OS_MAC

    #define LxEdgeInsets    NSEdgeInsets
    #define LxOffset        NSOffset
    #define valueWithLxOffset   valueWithNSOffset
    #define valueWithLxEdgeInsets   valueWithNSEdgeInsets

#endif

#define stringify               __STRING
#define LxType(var)             __typeof__((var))
#define LxBox(var)              __lx_box(@encode(LxType(var)), (var))
#define LxBoxToString(var)      [LxBox(var) description]
#define LxTypeStringOfVar(var)  __lx_type_string_for_var(@encode(LxType(var)), (var))

#ifdef DEBUG
    #define LxPrintf(fmt, ...)  printf("🎈%s + %d📍 %s\n", __PRETTY_FUNCTION__, __LINE__, [[NSString stringWithFormat:fmt, ##__VA_ARGS__]UTF8String])
    #define LxDBAnyVar(var)     LxPrintf(@"%s = %@", #var, LxBox(var))
    #define LxPrintAnything(x)   printf("🎈%s + %d📍 %s\n", __PRETTY_FUNCTION__, __LINE__, #x)
#else
    #define LxPrintf(fmt, ...)
    #define LxDBAnyVar(any)
    #define LxPrintAnything(x)
#endif

static inline id __lx_box(const char * type, ...)
{
    va_list variable_param_list;
    va_start(variable_param_list, type);
    
    id object = nil;
    
    if (strcmp(type, @encode(id)) == 0) {
        id param = va_arg(variable_param_list, id);
        object = param;
    }
    else if (strcmp(type, @encode(CGPoint)) == 0) {
        CGPoint param = (CGPoint)va_arg(variable_param_list, CGPoint);
        object = [NSValue valueWithCGPoint:param];
    }
    else if (strcmp(type, @encode(CGSize)) == 0) {
        CGSize param = (CGSize)va_arg(variable_param_list, CGSize);
        object = [NSValue valueWithCGSize:param];
    }
    else if (strcmp(type, @encode(CGVector)) == 0) {
        CGVector param = (CGVector)va_arg(variable_param_list, CGVector);
        object = [NSValue valueWithCGVector:param];
    }
    else if (strcmp(type, @encode(CGRect)) == 0) {
        CGRect param = (CGRect)va_arg(variable_param_list, CGRect);
        object = [NSValue valueWithCGRect:param];
    }
    else if (strcmp(type, @encode(NSRange)) == 0) {
        NSRange param = (NSRange)va_arg(variable_param_list, NSRange);
        object = [NSValue valueWithRange:param];
    }
    else if (strcmp(type, @encode(CFRange)) == 0) {
        CFRange param = (CFRange)va_arg(variable_param_list, CFRange);
        object = [NSValue value:&param withObjCType:type];
    }
    else if (strcmp(type, @encode(CGAffineTransform)) == 0) {
        CGAffineTransform param = (CGAffineTransform)va_arg(variable_param_list, CGAffineTransform);
        object = [NSValue valueWithCGAffineTransform:param];
    }
    else if (strcmp(type, @encode(CATransform3D)) == 0) {
        CATransform3D param = (CATransform3D)va_arg(variable_param_list, CATransform3D);
        object = [NSValue valueWithCATransform3D:param];
    }
    else if (strcmp(type, @encode(SEL)) == 0) {
        SEL param = (SEL)va_arg(variable_param_list, SEL);
        object = NSStringFromSelector(param);
    }
    else if (strcmp(type, @encode(Class)) == 0) {
        Class param = (Class)va_arg(variable_param_list, Class);
        object = NSStringFromClass(param);
    }
    else if (strcmp(type, @encode(LxOffset)) == 0) {
        LxOffset param = (LxOffset)va_arg(variable_param_list, LxOffset);
        object = [NSValue valueWithLxOffset:param];
    }
    else if (strcmp(type, @encode(LxEdgeInsets)) == 0) {
        LxEdgeInsets param = (LxEdgeInsets)va_arg(variable_param_list, LxEdgeInsets);
        object = [NSValue valueWithLxEdgeInsets:param];
    }
    else if (strcmp(type, @encode(short)) == 0) {
        short param = (short)va_arg(variable_param_list, int);
        object = @(param);
    }
    else if (strcmp(type, @encode(int)) == 0) {
        int param = (int)va_arg(variable_param_list, int);
        object = @(param);
    }
    else if (strcmp(type, @encode(long)) == 0) {
        long param = (long)va_arg(variable_param_list, long);
        object = @(param);
    }
    else if (strcmp(type, @encode(long long)) == 0) {
        long long param = (long long)va_arg(variable_param_list, long long);
        object = @(param);
    }
    else if (strcmp(type, @encode(float)) == 0) {
        float param = (float)va_arg(variable_param_list, double);
        object = @(param);
    }
    else if (strcmp(type, @encode(double)) == 0) {
        double param = (double)va_arg(variable_param_list, double);
        object = @(param);
    }
    else if (strcmp(type, @encode(BOOL)) == 0) {
        BOOL param = (BOOL)va_arg(variable_param_list, int);
        object = param ? @"YES" : @"NO";
    }
    else if (strcmp(type, @encode(bool)) == 0) {
        bool param = (bool)va_arg(variable_param_list, int);
        object = param ? @"true" : @"false";
    }
    else if (strcmp(type, @encode(char)) == 0) {
        char param = (char)va_arg(variable_param_list, int);
        object = [NSString stringWithFormat:@"%c", param];
    }
    else if (strcmp(type, @encode(unsigned short)) == 0) {
        unsigned short param = (unsigned short)va_arg(variable_param_list, unsigned int);
        object = @(param);
    }
    else if (strcmp(type, @encode(unsigned int)) == 0) {
        unsigned int param = (unsigned int)va_arg(variable_param_list, unsigned int);
        object = @(param);
    }
    else if (strcmp(type, @encode(unsigned long)) == 0) {
        unsigned long param = (unsigned long)va_arg(variable_param_list, unsigned long);
        object = @(param);
    }
    else if (strcmp(type, @encode(unsigned long long)) == 0) {
        unsigned long long param = (unsigned long long)va_arg(variable_param_list, unsigned long long);
        object = @(param);
    }
    else if (strcmp(type, @encode(unsigned char)) == 0) {
        unsigned char param = (unsigned char)va_arg(variable_param_list, unsigned int);
        object = [NSString stringWithFormat:@"%c", param];
    }
    else {
        void * param = (void *)va_arg(variable_param_list, void *);
        object = [NSString stringWithFormat:@"%p", param];
    }
    
    va_end(variable_param_list);
    
    return object;
}

static inline char __lx_first_char_for_string(const char * string)
{
    if (strlen(string) > 0) {
        return string[0];
    }
    else {
        return '\0';
    }
}

static inline char __lx_last_char_for_string(const char * string)
{
    if (strlen(string) > 0) {
        return string[strlen(string) - 1];
    }
    else {
        return '\0';
    }
}

static inline NSString * __lx_type_string_for_var(const char * type, ...)
{
    va_list variable_param_list;
    va_start(variable_param_list, type);
    
    NSString * typeString = nil;
    
    if (strcmp(type, @encode(id)) == 0) {
        
        id param = va_arg(variable_param_list, id);
        typeString = NSStringFromClass([param class]);
    }
    else if (strcmp(type, @encode(CGPoint)) == 0) {
        
        typeString = @stringify(CGPoint);
    }
    else if (strcmp(type, @encode(CGSize)) == 0) {
        
        typeString = @stringify(CGSize);
    }
    else if (strcmp(type, @encode(CGVector)) == 0) {

        typeString = @stringify(CGVector);
    }
    else if (strcmp(type, @encode(CGRect)) == 0) {

        typeString = @stringify(CGRect);
    }
    else if (strcmp(type, @encode(NSRange)) == 0) {

        typeString = @stringify(NSRange);
    }
    else if (strcmp(type, @encode(CFRange)) == 0) {

        typeString = @stringify(CFRange);
    }
    else if (strcmp(type, @encode(CGAffineTransform)) == 0) {

        typeString = @stringify(CGAffineTransform);
    }
    else if (strcmp(type, @encode(CATransform3D)) == 0) {

        typeString = @stringify(CATransform3D);
    }
    else if (strcmp(type, @encode(SEL)) == 0) {

        typeString = @stringify(SEL);
    }
    else if (strcmp(type, @encode(Class)) == 0) {

        typeString = @stringify(Class);
    }
    else if (strcmp(type, @encode(LxOffset)) == 0) {

        typeString = @stringify(LxOffset);
    }
    else if (strcmp(type, @encode(LxEdgeInsets)) == 0) {

        typeString = @stringify(LxEdgeInsets);
    }
    else if (strcmp(type, @encode(short)) == 0) {
       
        typeString = @stringify(short);
    }
    else if (strcmp(type, @encode(int)) == 0) {
     
        typeString = @stringify(int);
    }
    else if (strcmp(type, @encode(long)) == 0) {
      
        typeString = @stringify(long);
    }
    else if (strcmp(type, @encode(long long)) == 0) {
     
        typeString = @stringify(long long);
    }
    else if (strcmp(type, @encode(float)) == 0) {
 
        typeString = @stringify(float);
    }
    else if (strcmp(type, @encode(double)) == 0) {
     
        typeString = @stringify(double);
    }
    else if (strcmp(type, @encode(long double)) == 0) {
        
        typeString = @stringify(long double);
    }
    else if (strcmp(type, @encode(BOOL)) == 0) {

        typeString = @stringify(BOOL);
    }
    else if (strcmp(type, @encode(bool)) == 0) {

        typeString = @stringify(bool);
    }
    else if (strcmp(type, @encode(char)) == 0) {

        typeString = @stringify(char);
    }
    else if (strcmp(type, @encode(unsigned short)) == 0) {

        typeString = @stringify(unsigned short);
    }
    else if (strcmp(type, @encode(unsigned int)) == 0) {

        typeString = @stringify(unsigned int);
    }
    else if (strcmp(type, @encode(unsigned long)) == 0) {
 
        typeString = @stringify(unsigned long);
    }
    else if (strcmp(type, @encode(unsigned long long)) == 0) {

        typeString = @stringify(unsigned long long);
    }
    else if (strcmp(type, @encode(unsigned char)) == 0) {

        typeString = @stringify(unsigned char);
    }
    else if (strcmp(type, @encode(char *)) == 0) {
        
        typeString = @stringify(char *);
    }
    else if (strcmp(type, @encode(void)) == 0) {
        
        typeString = @stringify(void);
    }
    else if (strcmp(type, @encode(void *)) == 0) {
        
        typeString = @stringify(void *);
    }
    else if (__lx_first_char_for_string(type) == '[' && __lx_last_char_for_string(type) == ']') {
    
        typeString = @stringify(array);
    }
    else if (__lx_first_char_for_string(type) == '{' && __lx_last_char_for_string(type) == '}') {
        
        typeString = @stringify(struct);
    }
    else if (__lx_first_char_for_string(type) == '(' && __lx_last_char_for_string(type) == ')') {
        
        typeString = @stringify(union);
    }
    else if (__lx_first_char_for_string(type) == '^') {
        
        typeString = @stringify(pointer);
    }
    else if (__lx_first_char_for_string(type) == 'b') {
        
        typeString = @stringify(bit_field);
    }
    else if (strcmp(type, "?") == 0) {
        
        typeString = @stringify(unknown_type);
    }
    else {
        typeString = @"Can not distinguish temporarily!😂";
    }
    
    va_end(variable_param_list);
    
    return typeString;
}

#endif /* LxDBAnything_h */
