//
//  ViewController.m
//  LxDBAnythingDemo
//
//  Created by DeveloperLx on 15/10/24.
//  Copyright © 2015年 DeveloperLx. All rights reserved.
//

#import "ViewController.h"
#import "LxDBAnything.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    id obj = self.view;
    LxDBAnyVar(obj);
    
    CGPoint point = CGPointMake(12.34, 56.78);
    LxDBAnyVar(point);
    
    CGSize size = CGSizeMake(87.6, 5.43);
    LxDBAnyVar(size);
    
    CGRect rect = CGRectMake(2.3, 4.5, 5.6, 7.8);
    LxDBAnyVar(rect);
    
    NSRange range = NSMakeRange(3, 56);
    LxDBAnyVar(range);
    
    CGAffineTransform affineTransform = CGAffineTransformMake(1, 2, 3, 4, 5, 6);
    LxDBAnyVar(affineTransform);
        
    UIEdgeInsets edgeInsets = UIEdgeInsetsMake(3, 4, 5, 6);
    LxDBAnyVar(edgeInsets);
    
    SEL sel = @selector(viewDidLoad);
    LxDBAnyVar(sel);
    
    Class class = [UIBarButtonItem class];
    LxDBAnyVar(class);
    
    NSInteger i = 231;
    LxDBAnyVar(i);
    
    CGFloat f = M_E;
    LxDBAnyVar(f);
    
    BOOL b = YES;
    LxDBAnyVar(b);
    
    char c = 'S';
    LxDBAnyVar(c);
    
    LxPrintAnyMark(You can use macro LxPrintAnyMark print any without quotation as you want!);
    
    LxPrintf(@"Print format string you customed: %@", LxBox(affineTransform));
    
    NSLog(@"Even use normal NSLog function to print: %@", LxBox(edgeInsets));
}

@end
